// /Game/UI/Components/UMG_MissionType.UMG_MissionType_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionType_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Type;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMissionTypesRowHandle MissionType;  // 0x0270, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionType(int32 EntryPoint);  // parameters 0x4
};
