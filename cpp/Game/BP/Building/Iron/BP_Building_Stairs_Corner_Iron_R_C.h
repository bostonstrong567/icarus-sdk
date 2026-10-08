// /Game/BP/Building/Iron/BP_Building_Stairs_Corner_Iron_R.BP_Building_Stairs_Corner_Iron_R_C
// Derives from: ABP_Building_CornerStair_R_C > ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xD00, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Stairs_Corner_Iron_R_C : public ABP_Building_CornerStair_R_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CF8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Stairs_Corner_Iron_R(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
