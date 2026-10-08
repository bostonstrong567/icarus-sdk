// /Game/BP/Tools/WorldTool/Tech/CaveEntrance.CaveEntrance_C
// Derives from: AActor > UObject
// size 0x235, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACaveEntrance_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UniqueCaveID;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BaseCaveTag;  // 0x022C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Generated;  // 0x0234, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
