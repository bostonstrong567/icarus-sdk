// /Game/BP/Building/Wood/BP_Building_Beam_Horizontal_Wood.BP_Building_Beam_Horizontal_Wood_C
// Derives from: ABP_Building_Beam_Horizontal_C > ABP_Building_Beam_C > ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xD00, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Beam_Horizontal_Wood_C : public ABP_Building_Beam_Horizontal_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CF8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Beam_Horizontal_Wood(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
