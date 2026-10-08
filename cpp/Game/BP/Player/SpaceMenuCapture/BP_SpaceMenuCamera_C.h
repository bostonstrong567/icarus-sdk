// /Game/BP/Player/SpaceMenuCapture/BP_SpaceMenuCamera.BP_SpaceMenuCamera_C
// Derives from: APawn > AActor > UObject
// size 0x291, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_SpaceMenuCamera_C : public APawn
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESpaceMenuScene> MenuScene;  // 0x0290, size 0x1

    UFUNCTION(BlueprintCallable) void CaptureScene();
};
