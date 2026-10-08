// /Game/BP/Mounts/BP_Tamed_Wolf_Desert.BP_Tamed_Wolf_Desert_C
// Derives from: ABP_Tamed_Wolf_C > ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFD0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tamed_Wolf_Desert_C : public ABP_Tamed_Wolf_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0FC8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Tamed_Wolf_Desert(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
