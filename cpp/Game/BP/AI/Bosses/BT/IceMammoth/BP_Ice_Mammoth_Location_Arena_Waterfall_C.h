// /Game/BP/AI/Bosses/BT/IceMammoth/BP_Ice_Mammoth_Location_Arena_Waterfall.BP_Ice_Mammoth_Location_Arena_Waterfall_C
// Derives from: AActor > UObject
// size 0x239, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ice_Mammoth_Location_Arena_Waterfall_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEnterance;  // 0x0238, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Ice_Mammoth_Location_Arena_Waterfall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
