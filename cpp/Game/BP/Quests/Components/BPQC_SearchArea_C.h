// /Game/BP/Quests/Components/BPQC_SearchArea.BPQC_SearchArea_C
// Derives from: UActorComponent > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_SearchArea_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapSearchAreaRowHandle SearchArea;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarSquare_C* Widget;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoAdd;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Radius;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* ParentIcon;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor SearchAreaColor;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FMapIconsRowHandle MapIcon;  // 0x00F8, size 0x18

    UFUNCTION(BlueprintCallable) void AddSearchArea(FMapSearchAreaRowHandle SearchArea, int32 Radius);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void AttemptInitialise();
    UFUNCTION() void ExecuteUbergraph_BPQC_SearchArea(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveSearchArea();
};
