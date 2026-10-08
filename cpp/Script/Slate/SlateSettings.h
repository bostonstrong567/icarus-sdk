// /Script/Slate.SlateSettings
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Slate/Public/SlateSettings.h

UCLASS(Config=Engine)
class USlateSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool bExplicitCanvasChildZOrder;  // 0x0028, size 0x1
};
