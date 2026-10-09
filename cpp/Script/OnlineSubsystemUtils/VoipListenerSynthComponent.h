// /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x720, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/VoipListenerSynthComponent.h

UCLASS(Config=Engine)
class UVoipListenerSynthComponent : public USynthComponent
{
private:
    Audio::FPatchInput ExternalSend;  // 0x06C0, not reflected
    TUniquePtr<FVoicePacketBuffer,TDefaultDelete<FVoicePacketBuffer> > PacketBuffer;  // 0x06D8, not reflected
    FWindowsCriticalSection PacketBufferCriticalSection;  // 0x06E0, not reflected
    float MySampleRate;  // 0x0708, not reflected
    int32 PreDelaySampleCounter;  // 0x070C, not reflected
    float JitterDelayInSeconds;  // 0x0710, not reflected
public:
    UFUNCTION(BlueprintCallable) bool IsIdling();  // parameters 0x1
};
