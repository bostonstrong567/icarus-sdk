// /Game/BP/World/MissionDecal/BP_Decal_ELY_Story4_Grafitti_Deployable.BP_Decal_ELY_Story4_Grafitti_Deployable_C
// Derives from: ABP_Decal_Deployable_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x90D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_ELY_Story4_Grafitti_Deployable_C : public ABP_Decal_Deployable_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_02;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_01;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_08;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_07;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_06;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_05;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_04;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Grafitti_03;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation1;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5_0;  // 0x0858, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4_0;  // 0x0860, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3_0;  // 0x0868, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2_0;  // 0x0870, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1_0;  // 0x0878, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5_0;  // 0x0880, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4_0;  // 0x0888, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3_0;  // 0x0890, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2_0;  // 0x0898, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1_0;  // 0x08A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass_0;  // 0x08A8, size 0x10, named "Block Grass_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface_0;  // 0x08B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material_0;  // 0x08C8, size 0x10, named "Decal Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material_0;  // 0x08D8, size 0x8, named "Dynamic Material_0"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow_0;  // 0x08E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials_0;  // 0x08F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition_0;  // 0x0900, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet_0;  // 0x090C, size 0x1
};
