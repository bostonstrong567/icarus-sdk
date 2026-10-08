// /Game/ASS/VFX/FRE/LAVA/BP_Lavafall_Base.BP_Lavafall_Base_C
// Derives from: ABP_waterfallBase_C > AActor > UObject
// size 0x2A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lavafall_Base_C : public ABP_waterfallBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioLavaFallBottom;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ToggleSmoke;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lava_Spawn_Rate;  // 0x028C, size 0x4, named "Lava Spawn Rate"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lava_Sprite_Size_Min;  // 0x0290, size 0x4, named "Lava Sprite Size Min"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lava_Sprite_Size_Max;  // 0x0294, size 0x4, named "Lava Sprite Size Max"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lava_Splash_Velocity;  // 0x0298, size 0x4, named "Lava Splash Velocity"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Smoke_Spawn_Rate;  // 0x029C, size 0x4, named "Smoke Spawn Rate"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Smoke_Sprite_Size_Min;  // 0x02A0, size 0x4, named "Smoke Sprite Size Min"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Smoke_Sprite_Size_Max;  // 0x02A4, size 0x4, named "Smoke Sprite Size Max"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
