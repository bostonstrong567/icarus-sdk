// /Script/Engine.TouchInputControl
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/TouchInterface.h

USTRUCT()
struct FTouchInputControl
{
public:
    UPROPERTY(EditAnywhere) UTexture2D* Image1;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* Image2;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FVector2D Center;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FVector2D VisualSize;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FVector2D ThumbSize;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) FVector2D InteractionSize;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) FVector2D InputScale;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FKey MainInputKey;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere) FKey AltInputKey;  // 0x0050, size 0x18
};
