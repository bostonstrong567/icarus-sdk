// /Game/BP/Building/InteriorWood/BP_Building_Floor_Diagonal_Curved_Wood_Refined.BP_Building_Floor_Diagonal_Curved_Wood_Refined_C
// Derives from: ABP_Building_Floor_Diagonal_Curved_C > ABP_Building_Floor_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC78, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Floor_Diagonal_Curved_Wood_Refined_C : public ABP_Building_Floor_Diagonal_Curved_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C70, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Floor_Diagonal_Curved_Wood_Refined(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
