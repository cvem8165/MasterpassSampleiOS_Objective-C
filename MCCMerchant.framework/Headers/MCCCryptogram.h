/*
 *    MCCCryptogram.h
 *    MCCMerchant
 *
 * 	  Copyright © 2015-2017, Mastercard International Incorporated and/or its
 *    affiliates. All rights reserved.
 *
 *    TO THE EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS", WITHOUT
 *    WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 *    WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *    NON INFRINGEMENT. TO THE EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 *    MASTERCARD OR ITS AFFILIATES BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *    IN THE SOFTWARE.
 *
 */

#import <Foundation/Foundation.h>
#import "MCCMerchantConstants.h"

@interface MCCCryptogram : NSObject

@property(nonatomic, assign, readonly) MCCCryptogramType cryptogramType;
@property(nonatomic, strong, readonly,nonnull) NSString *cryptogramIdentifier;

//Unavailable
- (instancetype _Nullable)init NS_UNAVAILABLE;

/**
 *  Designated initilizer to instanstiate the cryptogram type object
 *
 *  @param cryptogramType The identifier for the cryptogram type. The default is "NONE".
 */
- (instancetype _Nullable)initWithType:(MCCCryptogramType)cryptogramType NS_DESIGNATED_INITIALIZER;

@end
