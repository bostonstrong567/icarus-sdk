// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Prospector_Sinotai_Gored_01.BP_Dead_Prospector_Sinotai_Gored_01_C
// Derives from: ABP_Dead_Prospector_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Prospector_Sinotai_Gored_01_C : public ABP_Dead_Prospector_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DeadProspector_Floor1;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Dirt;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusStaticMeshComponent* IcarusStaticMesh;  // 0x0358, size 0x8
};
