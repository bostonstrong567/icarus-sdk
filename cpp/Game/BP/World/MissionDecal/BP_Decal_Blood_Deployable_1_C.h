// /Game/BP/World/MissionDecal/BP_Decal_Blood_Deployable_1.BP_Decal_Blood_Deployable_1_C
// Derives from: ABP_Decal_Deployable_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x850, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Blood_Deployable_1_C : public ABP_Decal_Deployable_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass_0;  // 0x0810, size 0x10, named "Block Grass_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface_0;  // 0x0820, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material_0;  // 0x0830, size 0x10, named "Decal Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow_0;  // 0x0840, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
