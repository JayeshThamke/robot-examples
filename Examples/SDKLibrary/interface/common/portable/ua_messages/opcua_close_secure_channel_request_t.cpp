/* -----------------------------------------------------------------------------------------------------------------
                                        COPYRIGHT (c) 2009 - 2017
                                         HONEYWELL INC.,
                                        ALL RIGHTS RESERVED

            This software is a copyrighted work and/or information protected as a trade
            secret. Legal rights of Honeywell Inc. in this software are distinct from
            ownership of any medium in which the software is embodied. Copyright or trade
            secret notices included must be reproduced in any copies authorized by
            Honeywell Inc. The information in this software is subject to change without
            notice and should not be considered as a commitment by Honeywell Inc.
----------------------------------------------------------------------------------------------------------------- */

#include "opcua_close_secure_channel_request_t.h"

namespace uasdk
{

Status_t CloseSecureChannelRequest_t::EncodeBody(ICodec_t& encoder, IBuffer_t& buffer) const
{
  UASDK_UNUSED(encoder);
  UASDK_UNUSED(buffer);
  return OpcUa_Good;
}

Status_t CloseSecureChannelRequest_t::Decode(const IBuffer_t& buffer, ICodec_t& decoder, CloseSecureChannelRequest_t& result)
{
  Status_t status = result.DecodeHeader(buffer, decoder);
  if (status.IsBad())
  {
    return status;
  }

  return OpcUa_Good;
}

} // namespace uasdk