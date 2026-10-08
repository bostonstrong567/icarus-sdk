// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_Slug_Boss_Tank_SML.BP_Trophy_Slug_Boss_Tank_SML_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Slug_Boss_Tank_SML_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trophy_Slug_Boss_Tank_SML_Slug;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_AquariumBubblesLarge1;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_AquariumBubblesLarge;  // 0x0748, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Slug_Boss_Tank_SML(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
