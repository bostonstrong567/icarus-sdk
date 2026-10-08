// /Game/BP/Mounts/BP_Tame_Dog_B1.BP_Tame_Dog_B1_C
// Derives from: ABP_Tame_Dog_A1_C > ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFD0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Dog_B1_C : public ABP_Tame_Dog_A1_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0FC8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Tame_Dog_B1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
