// /Game/UI/Popups/UMG_BestiaryUnlock.UMG_BestiaryUnlock_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryUnlock_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BestiaryUnlockAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BestiaryImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Creature;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Highlight;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_472;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Level;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Unlock;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryGroup;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBestiaryUnlockPopup BestiaryUnlockType;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LiterialLevel;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryData Bestiary_Data;  // 0x02D0, size 0x1D8, named "Bestiary Data"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BestiaryUnlock(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_BA0AE4B34EC0BDAF30B165A807A5C23E(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Remove();
};
