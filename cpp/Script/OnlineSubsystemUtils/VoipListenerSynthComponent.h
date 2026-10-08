// /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x720, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/VoipListenerSynthComponent.h

UCLASS(Config=Engine)
class UVoipListenerSynthComponent : public USynthComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    Audio::FPatchInput ExternalSend;  // 0x06C0, private
    TUniquePtr<FVoicePacketBuffer,TDefaultDelete<FVoicePacketBuffer> > PacketBuffer;  // 0x06D8, private
    FWindowsCriticalSection PacketBufferCriticalSection;  // 0x06E0, private
    float MySampleRate;  // 0x0708, private
    int32 PreDelaySampleCounter;  // 0x070C, private
    float JitterDelayInSeconds;  // 0x0710, private

    UFUNCTION(BlueprintCallable) bool IsIdling();  // parameters 0x1
};
