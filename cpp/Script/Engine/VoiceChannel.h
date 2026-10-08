// /Script/Engine.VoiceChannel
// Derives from: UChannel > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Engine/VoiceChannel.h

UCLASS(Transient)
class UVoiceChannel : public UChannel
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TSharedPtr<FVoicePacket,0>,TSizedDefaultAllocator<32> > VoicePackets;  // 0x0068

    // Virtual functions that start here:
    //   AddVoicePacket
};
