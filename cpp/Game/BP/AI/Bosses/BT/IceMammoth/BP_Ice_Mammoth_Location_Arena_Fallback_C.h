// /Game/BP/AI/Bosses/BT/IceMammoth/BP_Ice_Mammoth_Location_Arena_Fallback.BP_Ice_Mammoth_Location_Arena_Fallback_C
// Derives from: AActor > UObject
// size 0x23A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ice_Mammoth_Location_Arena_Fallback_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ReferencedLocation;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewVar_0;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_MammothLocation> LocationType;  // 0x0239, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
