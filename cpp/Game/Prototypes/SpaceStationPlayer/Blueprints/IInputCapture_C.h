// /Game/Prototypes/SpaceStationPlayer/Blueprints/IInputCapture.IInputCapture_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIInputCapture_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void AltFire(bool Press);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Jump();
    UFUNCTION(BlueprintCallable) void LookX(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LookY(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PrimaryFire(bool Press);  // parameters 0x1
};
