// /Script/Engine.PlayerMuteList
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerMuteList.h

USTRUCT()
struct FPlayerMuteList
{
    UPROPERTY() bool bHasVoiceHandshakeCompleted;  // 0x0030, size 0x1
    UPROPERTY() int32 VoiceChannelIdx;  // 0x0034, size 0x4

    // Not reflected:
    TArray<TSharedRef<FUniqueNetId const ,0>,TSizedDefaultAllocator<32> > VoiceMuteList;  // 0x0000
    TArray<TSharedRef<FUniqueNetId const ,0>,TSizedDefaultAllocator<32> > GameplayVoiceMuteList;  // 0x0010
    TArray<TSharedRef<FUniqueNetId const ,0>,TSizedDefaultAllocator<32> > VoicePacketFilter;  // 0x0020
};
