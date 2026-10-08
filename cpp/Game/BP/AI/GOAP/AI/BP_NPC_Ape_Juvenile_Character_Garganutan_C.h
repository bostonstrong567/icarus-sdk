// /Game/BP/AI/GOAP/AI/BP_NPC_Ape_Juvenile_Character_Garganutan.BP_NPC_Ape_Juvenile_Character_Garganutan_C
// Derives from: ABP_NPC_Ape_Juvenile_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD20, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ape_Juvenile_Character_Garganutan_C : public ABP_NPC_Ape_Juvenile_Character_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0D18, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ape_Juvenile_Character_Garganutan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActionMontageNotify(FName NotifyName);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
};
