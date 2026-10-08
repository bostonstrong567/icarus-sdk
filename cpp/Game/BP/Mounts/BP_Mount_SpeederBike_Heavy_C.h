// /Game/BP/Mounts/BP_Mount_SpeederBike_Heavy.BP_Mount_SpeederBike_Heavy_C
// Derives from: ABP_Mount_SpeederBike_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x1038, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_SpeederBike_Heavy_C : public ABP_Mount_SpeederBike_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x1020, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight4;  // 0x1028, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight3;  // 0x1030, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mount_SpeederBike_Heavy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
