// /Game/UI/Popups/UMG_FishUnlock.UMG_FishUnlock_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2EC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FishUnlock_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FishUnlockAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CaughtTitle;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Highlight;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_115;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_228;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Length;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Quality;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Unlock;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Weight;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishTypeTracking Tracking;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FishUnlockType;  // 0x02E8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FishUnlock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_8A3E72E1463B6770DBCD4A9745B4F2AD(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PopulateFishInfo();
    UFUNCTION(BlueprintCallable) void Remove();
};
