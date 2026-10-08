// /Game/BP/Building/BP_Building_Floor_Diagonal_Curved.BP_Building_Floor_Diagonal_Curved_C
// Derives from: ABP_Building_Floor_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Floor_Diagonal_Curved_C : public ABP_Building_Floor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C68, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Floor_Diagonal_Curved(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
