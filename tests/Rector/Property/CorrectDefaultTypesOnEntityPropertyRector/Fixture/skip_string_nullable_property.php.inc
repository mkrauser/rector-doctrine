<?php

namespace Rector\Doctrine\Tests\Rector\Property\CorrectDefaultTypesOnEntityPropertyRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

final class SkipStringNullableProperty
{
    /**
     * @ORM\Column(type="string", nullable=true)
     */
    private ?string $entityId = null;
}
