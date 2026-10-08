// /Script/Engine.UserInterfaceSettings
// Derives from: UDeveloperSettings > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Engine/UserInterfaceSettings.h

UCLASS(Config=Engine)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) ERenderFocusRule RenderFocusRule;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) TMap<TEnumAsByte<EMouseCursor>, FHardwareCursorReference> HardwareCursors;  // 0x0040, size 0x50
    UPROPERTY(EditAnywhere, Config) TMap<TEnumAsByte<EMouseCursor>, FSoftClassPath> SoftwareCursors;  // 0x0090, size 0x50
    UPROPERTY(Config, Deprecated) FSoftClassPath DefaultCursor;  // 0x00E0, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath TextEditBeamCursor;  // 0x00F8, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath CrosshairsCursor;  // 0x0110, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath HandCursor;  // 0x0128, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath GrabHandCursor;  // 0x0140, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath GrabHandClosedCursor;  // 0x0158, size 0x18
    UPROPERTY(Config, Deprecated) FSoftClassPath SlashedCircleCursor;  // 0x0170, size 0x18
    UPROPERTY(EditAnywhere, Config) float ApplicationScale;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere, Config) EUIScalingRule UIScaleRule;  // 0x018C, size 0x1
    UPROPERTY(EditAnywhere, Config) FSoftClassPath CustomScalingRuleClass;  // 0x0190, size 0x18
    UPROPERTY(EditAnywhere, Config) FRuntimeFloatCurve UIScaleCurve;  // 0x01A8, size 0x88
    UPROPERTY(EditAnywhere, Config) bool bAllowHighDPIInGameMode;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, Config) FIntPoint DesignScreenSize;  // 0x0234, size 0x8
    UPROPERTY(EditAnywhere, Config) bool bLoadWidgetsOnDedicatedServer;  // 0x023C, size 0x1
    UPROPERTY(Transient) TArray<UObject*> CursorClasses;  // 0x0240, size 0x10
    UPROPERTY(Transient) TSubclassOf<UObject> CustomScalingRuleClassInstance;  // 0x0250, size 0x8
    UPROPERTY(Transient) UDPICustomScalingRule* CustomScalingRule;  // 0x0258, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TOptional<FIntPoint> LastViewportSize;  // 0x0260, private
    float CalculatedScale;  // 0x026C, private
};
