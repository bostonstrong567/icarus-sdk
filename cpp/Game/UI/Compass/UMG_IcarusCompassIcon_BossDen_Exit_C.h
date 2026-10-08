// /Game/UI/Compass/UMG_IcarusCompassIcon_BossDen_Exit.UMG_IcarusCompassIcon_BossDen_Exit_C
// Derives from: UUMG_IcarusCompassIcon_C > UIcarusCompassIcon > UUserWidget > UWidget > UVisual > UObject
// size 0x418, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusCompassIcon_BossDen_Exit_C : public UUMG_IcarusCompassIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Portable_Beacon_C* BeaconReference;  // 0x0410, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_IcarusCompassIcon_BossDen_Exit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetMaxCompassDisplayDistance() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_204B367A4F3D0ED8CFE3F28CF2C6D8D6(UObject* Loaded);  // parameters 0x8
};
