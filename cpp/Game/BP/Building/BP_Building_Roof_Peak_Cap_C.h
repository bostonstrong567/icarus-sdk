// /Game/BP/Building/BP_Building_Roof_Peak_Cap.BP_Building_Roof_Peak_Cap_C
// Derives from: ABP_Building_Ramp_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC80, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Roof_Peak_Cap_C : public ABP_Building_Ramp_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* BPC_EnvironmentalBuildupChild2;  // 0x0C68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* BPC_EnvironmentalBuildupChild1;  // 0x0C70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_EnvironmentalBuildupChild_C* BPC_EnvironmentalBuildupChild;  // 0x0C78, size 0x8
};
