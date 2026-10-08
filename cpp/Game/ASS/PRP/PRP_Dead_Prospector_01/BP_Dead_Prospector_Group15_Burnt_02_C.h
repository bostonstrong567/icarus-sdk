// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Prospector_Group15_Burnt_02.BP_Dead_Prospector_Group15_Burnt_02_C
// Derives from: ABP_Dead_Prospector_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Prospector_Group15_Burnt_02_C : public ABP_Dead_Prospector_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DeadProspector_Floor1;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* dirt;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* burnt;  // 0x0358, size 0x8
};
