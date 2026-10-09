// /Game/ThirdPartyAssets/Crosshair/BP_CrosshairInterface.BP_CrosshairInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CrosshairInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetCrosshairAimAlpha(float& AimAlpha);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WantsBowMode(bool& bWantsBowMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WantsShowCrosshair(bool& bShowCrosshair);  // parameters 0x1
};
