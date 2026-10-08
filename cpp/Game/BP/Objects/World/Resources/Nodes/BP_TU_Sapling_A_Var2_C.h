// /Game/BP/Objects/World/Resources/Nodes/BP_TU_Sapling_A_Var2.BP_TU_Sapling_A_Var2_C
// Derives from: ABP_ResourceNodeBase_C > AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x3E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TU_Sapling_A_Var2_C : public ABP_ResourceNodeBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x03D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TU_Sapling_A_Var2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
