// /Game/BP/AI/GOAP/BP_NPC_Juvenile_Domesticated.BP_NPC_Juvenile_Domesticated_C
// Derives from: ABP_IcarusNPCGOAPCharacter_Juvenile_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_NPC_Juvenile_Domesticated_C : public ABP_IcarusNPCGOAPCharacter_Juvenile_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ParentCharacterKey;  // 0x0CE8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Juvenile_Domesticated(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void OnParentCharacterUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
};
