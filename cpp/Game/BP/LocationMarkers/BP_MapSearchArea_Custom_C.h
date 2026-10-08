// /Game/BP/LocationMarkers/BP_MapSearchArea_Custom.BP_MapSearchArea_Custom_C
// Derives from: AMapSearchAreaProxy > AIcarusActor > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MapSearchArea_Custom_C : public AMapSearchAreaProxy
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarSquare_C* Widget;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FMapIconsRowHandle MapIconData;  // 0x0304, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarMainScreen_C* RadarMainScreen;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* ParentIcon;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle MapIcon;  // 0x0330, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_MapSearchArea_Custom(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_8EBA724943AB38CE185D73B81B2F7D71(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_MapIconData();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
