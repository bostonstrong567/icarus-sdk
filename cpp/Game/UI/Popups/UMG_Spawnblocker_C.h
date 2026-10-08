// /Game/UI/Popups/UMG_Spawnblocker.UMG_Spawnblocker_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Spawnblocker_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Fuel;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_1;  // 0x02D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Spawnblocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWidget();
};
