// /Game/BP/Tools/CheatFunctions/CaveTeleport/UMG_TeleportCheatTooltip.UMG_TeleportCheatTooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TeleportCheatTooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CaveDescription;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_395;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCaveLocation CaveLocation;  // 0x0288, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCavePrefabAsset* PrefabAsset;  // 0x02C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_TeleportCheatTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitTooltip();
    UFUNCTION(BlueprintCallable) void OnLoaded_2BDB4D10445C04033B66DA98768F8F66(UObject* Loaded);  // parameters 0x8
};
