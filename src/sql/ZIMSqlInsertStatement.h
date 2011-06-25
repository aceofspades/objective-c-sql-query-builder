/*
 * Copyright 2011 Ziminji
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "ZIMSqlStatement.h"

/*!
 @class					ZIMSqlInsertStatement
 @discussion			This class represents an SQL insert statement.
 @version				2011-04-07
 @see					http://www.sqlite.org/lang_insert.html
 */
@interface ZIMSqlInsertStatement : NSObject <ZIMSqlStatement> {

	@protected
		NSString *_table;
		NSMutableDictionary *_column;

}
/*!
 @method				into:
 @discussion			This method will set the table used in the SQL statement.
 @param table			The table that will be used in the SQL statement.
 @version				2011-06-23
 */
- (void) into: (NSString *)table;
/*!
 @method				column:value:
 @discussion			This method will add a column/value pair to the SQL statement.
 @param column			The column where the value will be inserted.
 @param value			The value to be inserted.
 @version				2011-04-01
 */
- (void) column: (NSString *)column value: (id)value;
/*!
 @method				statement
 @discussion			This method will return the SQL statement.
 @return				The SQL statement that was constructed.
 @version				2011-03-19
 */
- (NSString *) statement;

@end
