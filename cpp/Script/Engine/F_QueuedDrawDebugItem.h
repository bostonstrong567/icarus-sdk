// /Script/Engine.QueuedDrawDebugItem
// size 0x68, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimInstanceProxy.h

USTRUCT()
struct FQueuedDrawDebugItem
{
    UPROPERTY(Transient) TEnumAsByte<EDrawDebugItemType> ItemType;  // 0x0000, size 0x1
    UPROPERTY(Transient) FVector StartLoc;  // 0x0004, size 0xC
    UPROPERTY(Transient) FVector EndLoc;  // 0x0010, size 0xC
    UPROPERTY(Transient) FVector Center;  // 0x001C, size 0xC
    UPROPERTY(Transient) FRotator Rotation;  // 0x0028, size 0xC
    UPROPERTY(Transient) float Radius;  // 0x0034, size 0x4
    UPROPERTY(Transient) float Size;  // 0x0038, size 0x4
    UPROPERTY(Transient) int32 Segments;  // 0x003C, size 0x4
    UPROPERTY(Transient) FColor Color;  // 0x0040, size 0x4
    UPROPERTY(Transient) bool bPersistentLines;  // 0x0044, size 0x1
    UPROPERTY(Transient) float LifeTime;  // 0x0048, size 0x4
    UPROPERTY(Transient) float Thickness;  // 0x004C, size 0x4
    UPROPERTY(Transient) FString Message;  // 0x0050, size 0x10
    UPROPERTY(Transient) FVector2D TextScale;  // 0x0060, size 0x8
};
