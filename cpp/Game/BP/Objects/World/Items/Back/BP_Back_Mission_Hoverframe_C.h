// /Game/BP/Objects/World/Items/Back/BP_Back_Mission_Hoverframe.BP_Back_Mission_Hoverframe_C
// Derives from: ABP_Back_Item_Base_C > AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Back_Mission_Hoverframe_C : public ABP_Back_Item_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0580, size 0x8
};
