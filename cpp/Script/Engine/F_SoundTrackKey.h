// /Script/Engine.SoundTrackKey
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackSound.h

USTRUCT()
struct FSoundTrackKey
{
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY() float Volume;  // 0x0004, size 0x4
    UPROPERTY() float Pitch;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) USoundBase* Sound;  // 0x0010, size 0x8
};
