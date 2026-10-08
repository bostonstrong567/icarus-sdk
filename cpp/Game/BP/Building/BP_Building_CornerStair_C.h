// /Game/BP/Building/BP_Building_CornerStair.BP_Building_CornerStair_C
// Derives from: ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_CornerStair_C : public ABP_Building_Frame_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* EnvironmentalBuildUpChild2;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* EnvironmentalBuildUpChild;  // 0x0CF0, size 0x8
};
