#include <client/Messages.hpp>
namespace TiValue {
    namespace client {

        const MessageTypeEnum TrxMessage::type = MessageTypeEnum::trx_message_type;
        const MessageTypeEnum BlockMessage::type = MessageTypeEnum::block_message_type;
        const MessageTypeEnum BatchTrxMessage::type = MessageTypeEnum::batch_trx_message_type;

    }
} // TiValue::client
