// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Ape_B_Base.BP_Mission_Ape_B_Base_C
// Derives from: ABP_WorldObject_NoHighlight_C > AIcarusActor > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Ape_B_Base_C : public ABP_WorldObject_NoHighlight_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_06;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_Cliff_05;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02E0, size 0x8
};
