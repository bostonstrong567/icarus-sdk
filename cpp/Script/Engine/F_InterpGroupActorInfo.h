// /Script/Engine.InterpGroupActorInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Matinee/MatineeActor.h

USTRUCT()
struct FInterpGroupActorInfo
{
    UPROPERTY(EditAnywhere) FName ObjectName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<AActor*> Actors;  // 0x0008, size 0x10
};
