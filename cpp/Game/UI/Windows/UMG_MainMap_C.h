// /Game/UI/Windows/UMG_MainMap.UMG_MainMap_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MainMap_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* MapDisabled;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DisabledVbox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_59;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Keyprompts;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MapDisabledBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RadarMainScreen_C* UMG_RadarMainScreen;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMapDisabled;  // 0x02A8, size 0x1

    UFUNCTION(BlueprintCallable) void ConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MainMap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLocalPlayerStatsChanged();
    UFUNCTION(BlueprintCallable) void UpdateMapVisibility();
};
