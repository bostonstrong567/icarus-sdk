// /Game/BP/Building/Stone/BP_Building_Frame_Stone.BP_Building_Frame_Stone_C
// Derives from: ABP_Building_Frame_C > ABP_Building_Base_C > ABuildingBase > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Building_Frame_Stone_C : public ABP_Building_Frame_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CE8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Building_Frame_Stone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
