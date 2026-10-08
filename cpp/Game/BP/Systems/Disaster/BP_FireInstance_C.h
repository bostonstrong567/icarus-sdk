// /Game/BP/Systems/Disaster/BP_FireInstance.BP_FireInstance_C
// Derives from: AFireInstance > AFireInstanceBase > AIcarusActor > AActor > UObject
// size 0x320, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FireInstance_C : public AFireInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FireInstance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
