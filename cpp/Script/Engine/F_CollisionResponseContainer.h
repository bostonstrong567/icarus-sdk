// /Script/Engine.CollisionResponseContainer
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FCollisionResponseContainer
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> WorldStatic;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> WorldDynamic;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> Pawn;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> Visibility;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> Camera;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> PhysicsBody;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> Vehicle;  // 0x0006, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> Destructible;  // 0x0007, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel1;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel2;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel3;  // 0x000A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel4;  // 0x000B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel5;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> EngineTraceChannel6;  // 0x000D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel1;  // 0x000E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel2;  // 0x000F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel3;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel4;  // 0x0011, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel5;  // 0x0012, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel6;  // 0x0013, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel7;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel8;  // 0x0015, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel9;  // 0x0016, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel10;  // 0x0017, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel11;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel12;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel13;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel14;  // 0x001B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel15;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel16;  // 0x001D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel17;  // 0x001E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECollisionResponse> GameTraceChannel18;  // 0x001F, size 0x1

    // Not reflected:
    uint8[32] EnumArray;  // 0x0000
};
