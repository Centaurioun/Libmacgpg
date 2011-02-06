/*
 Copyright © Roman Zechmeister, 2010
 
 Dieses Programm ist freie Software. Sie können es unter den Bedingungen 
 der GNU General Public License, wie von der Free Software Foundation 
 veröffentlicht, weitergeben und/oder modifizieren, entweder gemäß 
 Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren Version.
 
 Die Veröffentlichung dieses Programms erfolgt in der Hoffnung, daß es Ihnen 
 von Nutzen sein wird, aber ohne irgendeine Garantie, sogar ohne die implizite 
 Garantie der Marktreife oder der Verwendbarkeit für einen bestimmten Zweck. 
 Details finden Sie in der GNU General Public License.
 
 Sie sollten ein Exemplar der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. Falls nicht, siehe <http://www.gnu.org/licenses/>.
*/

#import "GPGGlobals.h"

@interface GPGKeySignature : NSObject {
	NSString *keyID;
	NSString *shortKeyID;
	
	NSString *type;
	
	int signatureClass;
	
	GPGPublicKeyAlgorithm algorithm;
	NSDate *creationDate;
	NSDate *expirationDate;
	
	
	NSString *description;
	
	NSString *userID;
	NSString *name;
	NSString *email;
	NSString *comment;
	
	BOOL revocationSignature;
	BOOL local;
}

@property BOOL local;
@property BOOL revocationSignature;
@property int signatureClass;
@property (copy) NSString *type;
@property (retain) NSString *userID;
@property (retain) NSString *name;
@property (retain) NSString *email;
@property (retain) NSString *comment;
@property (retain) NSString *keyID;
@property (retain) NSString *shortKeyID;
@property (retain) NSString *description;
@property GPGPublicKeyAlgorithm algorithm;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *expirationDate;


+ (NSArray *)signaturesWithListing:(NSArray *)listing;
+ (id)signatureWithListing:(NSArray *)listing;
- (id)initWithListing:(NSArray *)listing;

@end
